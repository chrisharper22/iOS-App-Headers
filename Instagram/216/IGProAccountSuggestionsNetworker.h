//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGNetworkSourceDelegate-Protocol.h"

@class IG4BLogger, IGNetworkSource, IGUserSession, NSString;

@interface IGProAccountSuggestionsNetworker : NSObject <IGNetworkSourceDelegate>
{
    IGUserSession *_userSession;
    IG4BLogger *_logger;
    IGNetworkSource *_networkSource;
    CDUnknownBlockType __completionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType _completionHandler; // @synthesize _completionHandler=__completionHandler;
- (void)_logFetchDataErrorFromError:(id)arg1;
- (void)_logFetchData;
- (void)networkSource:(id)arg1 didFailWithError:(id)arg2 httpResponse:(id)arg3 isPrefetch:(_Bool)arg4 requestTag:(id)arg5;
- (void)networkSource:(id)arg1 didFetchMoreWithObject:(id)arg2 httpResponse:(id)arg3 isPrefetch:(_Bool)arg4 requestTag:(id)arg5;
- (void)networkSource:(id)arg1 didFetchObject:(id)arg2 httpResponse:(id)arg3 isPrefetch:(_Bool)arg4 requestTag:(id)arg5;
- (id)networkSource:(id)arg1 requestWithMaxID:(id)arg2 isPrefetch:(_Bool)arg3 requestTag:(id)arg4;
@property(readonly, nonatomic) _Bool isMoreAvailable;
@property(readonly, nonatomic) _Bool isCurrentlyFetching;
- (void)_fetchUserFollowStatusWithResponse:(id)arg1;
- (id)_fetchProAccountSuggestionsURLRequestWithSeenIDs:(id)arg1;
- (void)fetchMoreProAccountSuggestionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchProAccountSuggestionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithUserSession:(id)arg1 logger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
