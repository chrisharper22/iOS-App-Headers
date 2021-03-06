//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBSDKAppLinkResolving-Protocol.h>

@class NSString;
@protocol FBSDKErrorCreating, FBSDKSessionProviding;

@interface FBSDKWebViewAppLinkResolver : NSObject <FBSDKAppLinkResolving>
{
    id <FBSDKSessionProviding> _sessionProvider;
    id <FBSDKErrorCreating> _errorFactory;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) id <FBSDKErrorCreating> errorFactory; // @synthesize errorFactory=_errorFactory;
@property(retain, nonatomic) id <FBSDKSessionProviding> sessionProvider; // @synthesize sessionProvider=_sessionProvider;
- (id)appLinkFromALData:(id)arg1 destination:(id)arg2;
- (void)getALDataFromLoadedPage:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)parseALData:(id)arg1;
- (void)appLinkFromURL:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)followRedirects:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithSessionProvider:(id)arg1 errorFactory:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

