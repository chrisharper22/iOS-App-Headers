//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGCameraEffectFeedNetworkDataProvider.h"

@class IGUserSession, NSString;

@interface IGProfileCameraEffectDataProvider : IGCameraEffectFeedNetworkDataProvider
{
    IGUserSession *_userSession;
    NSString *_targetUserID;
}

- (void).cxx_destruct;
- (id)paramsForPageCursor:(id)arg1;
- (id)initWithUserSession:(id)arg1 targetUserID:(id)arg2 loggingSurface:(long long)arg3;

@end

