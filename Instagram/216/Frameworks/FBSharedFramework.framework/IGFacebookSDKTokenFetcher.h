//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGFacebookSDKTokenFetcher : NSObject
{
    _Bool _isRequesting;
}

+ (id)sharedFetcher;
- (id)FXCALTokenPermissions;
- (id)defaultTokenPermissions;
- (void)requestAccessTokenWithPermissions:(id)arg1 fromViewController:(id)arg2 forPublish:(_Bool)arg3 accessTokenCallback:(CDUnknownBlockType)arg4;
- (void)requestAccessTokenWithPermissions:(id)arg1 forPublish:(_Bool)arg2 accessTokenCallback:(CDUnknownBlockType)arg3;
- (id)_initPrivate;

@end

