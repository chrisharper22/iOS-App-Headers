//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBGraphQLServiceToken, IGUserSession;

@interface IGARBrandAdsNetworker : NSObject
{
    IGUserSession *_userSession;
    FBGraphQLServiceToken *_activeRequestToken;
}

- (void).cxx_destruct;
- (void)_handleRequestFailureWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleRequestSuccessWithResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelRequest;
- (void)fetchARAdMetadataWithEncodedToken:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithUserSession:(id)arg1;

@end

