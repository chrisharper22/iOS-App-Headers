//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectOutgoingUpdateListener-Protocol.h"

@class IGDirectCache, IGDirectThreadViewMessagesClientStateManager, IGDirectTranslationsLogger, IGDirectTranslationsNetworker, IGDirectUIThread, IGUserSession, NSString;
@protocol IGDirectOutgoingUpdateSending, IGDirectTranslationsServiceLanguageDetectionDelegate;

@interface IGDirectTranslationsService : NSObject <IGDirectOutgoingUpdateListener>
{
    IGDirectTranslationsNetworker *_networker;
    id <IGDirectOutgoingUpdateSending> _directOutgoingUpdateSender;
    IGUserSession *_userSession;
    IGDirectUIThread *_thread;
    IGDirectThreadViewMessagesClientStateManager *_messagesClientStateManager;
    IGDirectCache *_cache;
    id <IGDirectTranslationsServiceLanguageDetectionDelegate> _delegate;
    IGDirectTranslationsLogger *_logger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGDirectTranslationsLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <IGDirectTranslationsServiceLanguageDetectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_showTranslateErrorToastWithTargetLanguage:(id)arg1 isMessageAlreadyInTargetLanguage:(_Bool)arg2;
- (void)_updateCacheAndMessageClientStatesForBulkTranslatedMessages:(id)arg1 messagesToTranslate:(id)arg2 targetLanguage:(id)arg3 isRequestFromUserClick:(_Bool)arg4;
- (id)_eligibleMessagesToTranslateFromMessageSet:(id)arg1;
- (void)_translatePublishedMessagesIfNecessary:(id)arg1 isRequestFromUserClick:(_Bool)arg2;
- (void)_detectLanguagesForPublishedMessagesIfNecessary;
- (void)didTapTranslationsFooterTextForMessageWithId:(id)arg1 hasTranslationAvailable:(_Bool)arg2;
- (void)directThreadOutgoingUpdate:(id)arg1 didFailWithError:(id)arg2;
- (void)directMessageOutgoingUpdate:(id)arg1 didFailWithError:(id)arg2;
- (void)directThreadOutgoingUpdateDidSucceed:(id)arg1;
- (void)directMessageOutgoingUpdateDidSucceed:(id)arg1;
- (void)updateTranslationBannerImpressionCount;
- (_Bool)_shouldDisplayTranslationBanner;
- (void)displayTranslationBannerIfNecessary;
- (void)didTapBannerTranslateButton;
- (void)messageListDidUpdateWithThread:(id)arg1 isInitialLoad:(_Bool)arg2;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 thread:(id)arg2 messagesClientStateManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
