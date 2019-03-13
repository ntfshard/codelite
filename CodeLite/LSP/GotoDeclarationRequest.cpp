#include "GotoDeclarationRequest.h"
#include "LSP/LSPEvent.h"

LSP::GotoDeclarationRequest::GotoDeclarationRequest(const wxFileName& filename, size_t line, size_t column)
    : m_filename(filename)
    , m_line(line)
    , m_column(column)
{
    SetMethod("textDocument/declaration");
    m_params.reset(new TextDocumentPositionParams());
    m_params->As<TextDocumentPositionParams>()->SetTextDocument(TextDocumentIdentifier(filename));
    m_params->As<TextDocumentPositionParams>()->SetPosition(Position(line, column));
    SetNeedsReply(true);
}

LSP::GotoDeclarationRequest::~GotoDeclarationRequest() {}

void LSP::GotoDeclarationRequest::OnResponse(const LSP::ResponseMessage& response, wxEvtHandler* owner)
{
    JSONItem result = response.Get("result");
    if(!result.isOk()) { return; }
    LSP::Location loc;
    if(result.isArray()) {
        loc.FromJSON(result.arrayItem(0));
    } else {
        loc.FromJSON(result);
    }

    // We send the same event for declaraion as we do for definition
    LSPEvent definitionEvent(wxEVT_LSP_DEFINITION);
    definitionEvent.SetLocation(loc);
    owner->AddPendingEvent(definitionEvent);
}

void LSP::GotoDeclarationRequest::BuildUID()
{
    if(!m_uuid.IsEmpty()) { return; }
    m_uuid << GetMethod() << ":"
           << m_params->As<TextDocumentPositionParams>()->GetTextDocument().GetFilename().GetFullPath();
}