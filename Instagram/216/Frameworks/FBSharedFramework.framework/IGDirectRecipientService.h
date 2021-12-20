//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGDirectRecipientNullStateManaging-Protocol.h>
#import <FBSharedFramework/IGDirectRecipientQueryStateManaging-Protocol.h>

@class IGDirectRecipientNullStateManager, IGDirectRecipientQueryStateManager, NSString;

@interface IGDirectRecipientService : NSObject <IGDirectRecipientNullStateManaging, IGDirectRecipientQueryStateManaging>
{
    IGDirectRecipientNullStateManager *_nullStateManager;
    IGDirectRecipientQueryStateManager *_queryStateManager;
}

- (void).cxx_destruct;
- (id)fetchLocalRecipients;
- (void)fetchContentSearchResultsForString:(id)arg1 nextPaginationOffset:(unsigned long long)arg2 isServerResultsEnabled:(_Bool)arg3 successHandler:(CDUnknownBlockType)arg4 failureHandler:(CDUnknownBlockType)arg5;
- (void)fetchRecipientsForString:(id)arg1 selectedRecipientPks:(id)arg2 fetchType:(long long)arg3 isServerResultsEnabled:(_Bool)arg4 loggingSessionId:(id)arg5 successHandler:(CDUnknownBlockType)arg6 failureHandler:(CDUnknownBlockType)arg7 entryPoint:(unsigned long long)arg8;
- (void)fetchRecipientsForString:(id)arg1 selectedRecipientPks:(id)arg2 isServerResultsEnabled:(_Bool)arg3 loggingSessionId:(id)arg4 successHandler:(CDUnknownBlockType)arg5 failureHandler:(CDUnknownBlockType)arg6 entryPoint:(unsigned long long)arg7;
- (void)fetchDefaultRecipients:(CDUnknownBlockType)arg1;
- (id)defaultRecipientsUsersOnly;
- (id)defaultRecipientsExcludingFallback;
- (id)defaultRecipients;
- (id)initWithDirectCache:(id)arg1 userSession:(id)arg2 queryConfig:(id)arg3 threadSearchService:(id)arg4 localSearchConfiguration:(id)arg5 nicknameManager:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

