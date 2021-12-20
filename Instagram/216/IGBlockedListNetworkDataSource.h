//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserStore;
@protocol IGAPIClient;

@interface IGBlockedListNetworkDataSource : NSObject
{
    id <IGAPIClient> _networker;
    IGUserStore *_userStore;
    _Bool _isLoading;
    long long _datasourceType;
}

- (void).cxx_destruct;
- (void)_onUserFetchFailed:(id)arg1 failureHandler:(CDUnknownBlockType)arg2;
- (void)_onUsersReceived:(id)arg1 successHandler:(CDUnknownBlockType)arg2;
- (id)_parseSugegstedBlockListUsers:(id)arg1;
- (id)_parseBlockedListUsers:(id)arg1;
- (void)fetchDataWithSuccessHandler:(CDUnknownBlockType)arg1 failureHandler:(CDUnknownBlockType)arg2;
- (id)_endPointForBlockedUsers;
- (id)initWithNetworker:(id)arg1 userStore:(id)arg2 dataSourceType:(long long)arg3;

@end

