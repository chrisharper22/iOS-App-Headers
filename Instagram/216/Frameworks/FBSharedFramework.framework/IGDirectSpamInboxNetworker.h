//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGObjectStores, IGUser;
@protocol IGAPIClient, IGDirectInteropFeatureGating;

@interface IGDirectSpamInboxNetworker : NSObject
{
    id <IGAPIClient> _apiClient;
    IGObjectStores *_objectStores;
    IGUser *_user;
    id <IGDirectInteropFeatureGating> _interopFeatureGating;
}

- (void).cxx_destruct;
- (void)_handleSpamInboxResponse:(id)arg1 successBlock:(CDUnknownBlockType)arg2;
- (void)fetchSpamInboxWithPageCursor:(id)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (id)initWithAPIClient:(id)arg1 objectStores:(id)arg2 user:(id)arg3 interopFeatureGating:(id)arg4;

@end

