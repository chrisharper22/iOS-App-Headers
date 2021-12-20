//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGObjectStores, IGUser;
@protocol IGAPIClient, IGDirectInteropFeatureGating, IGUserLauncherSetProviding;

@interface IGDirectThreadNetworker : NSObject
{
    id <IGAPIClient> _networker;
    IGUser *_currentUser;
    IGObjectStores *_objectStores;
    id <IGDirectInteropFeatureGating> _interopFeatureGating;
    id <IGUserLauncherSetProviding> _launcherSetProvider;
}

- (void).cxx_destruct;
- (id)_fetchResultFromThreadResponse:(id)arg1 fetchInput:(id)arg2;
- (id)fetchThreadWithInput:(id)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (id)initWithNetworker:(id)arg1 currentUser:(id)arg2 objectStores:(id)arg3 interopFeatureGating:(id)arg4 launcherSetProvider:(id)arg5;

@end

