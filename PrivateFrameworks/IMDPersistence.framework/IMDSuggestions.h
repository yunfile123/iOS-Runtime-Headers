/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
 */

@interface IMDSuggestions : NSObject <SGMessagesSuggestionsServiceDelegate> {
    <NSObject><SGSuggestionsServiceMessagesProtocol> * _sgService;
}

@property (retain) <NSObject><SGSuggestionsServiceMessagesProtocol> *sgService;

- (void)dealloc;
- (id)init;
- (void)setSgService:(id)arg1;
- (id)sgService;
- (void)suggestionsFromMessage:(id)arg1 options:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (id)suggestionsService:(id)arg1 needsContextForConversationIdentifier:(id)arg2 numberOfMessagesNeeded:(unsigned int)arg3;

@end
