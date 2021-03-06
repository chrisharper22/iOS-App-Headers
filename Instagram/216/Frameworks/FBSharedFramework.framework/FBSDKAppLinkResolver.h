//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBSDKAppLinkResolving-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol FBSDKAppLinkResolverRequestBuilding, FBSDKClientTokenProviding;

@interface FBSDKAppLinkResolver : NSObject <FBSDKAppLinkResolving>
{
    NSMutableDictionary *_cachedFBSDKAppLinks;
    long long _userInterfaceIdiom;
    id <FBSDKAppLinkResolverRequestBuilding> _requestBuilder;
    id <FBSDKClientTokenProviding> _clientTokenProvider;
    Class _accessTokenProvider;
}

+ (id)resolver;
- (void).cxx_destruct;
@property(retain, nonatomic) Class accessTokenProvider; // @synthesize accessTokenProvider=_accessTokenProvider;
@property(retain, nonatomic) id <FBSDKClientTokenProviding> clientTokenProvider; // @synthesize clientTokenProvider=_clientTokenProvider;
@property(retain, nonatomic) id <FBSDKAppLinkResolverRequestBuilding> requestBuilder; // @synthesize requestBuilder=_requestBuilder;
@property(nonatomic) long long userInterfaceIdiom; // @synthesize userInterfaceIdiom=_userInterfaceIdiom;
@property(retain, nonatomic) NSMutableDictionary *cachedFBSDKAppLinks; // @synthesize cachedFBSDKAppLinks=_cachedFBSDKAppLinks;
- (id)buildAppLinkForURL:(id)arg1 inResults:(id)arg2;
- (void)appLinksFromURLs:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)appLinkFromURL:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithUserInterfaceIdiom:(long long)arg1 requestBuilder:(id)arg2 clientTokenProvider:(id)arg3 accessTokenProvider:(Class)arg4;
- (id)initWithUserInterfaceIdiom:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

