//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class IGPromoteBusinessUserAccessTokenErrorModel, NSError;

@interface IGPromoteLoginFailedHandlerErrorModel : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    IGPromoteBusinessUserAccessTokenErrorModel *_instagramLogin_errorModel;
    NSError *_facebookLogin_error;
}

+ (id)instagramLoginWithErrorModel:(id)arg1;
+ (id)facebookLoginWithError:(id)arg1;
- (void).cxx_destruct;
- (void)matchInstagramLogin:(CDUnknownBlockType)arg1 facebookLogin:(CDUnknownBlockType)arg2;

@end

