//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBScriptMessageHandlerBase.h>

@protocol FBInstantExperienceDelegate;

@interface IGExtensionGetSupportedFeaturesHandler : FBScriptMessageHandlerBase
{
    id <FBInstantExperienceDelegate> _delegate;
}

+ (id)supportedMessageNames;
- (void).cxx_destruct;
- (_Bool)requireDomainToBeWhitelisted;
- (_Bool)requireHttps;
- (void)handleScriptMessageFromWebView:(id)arg1 messageOrigin:(id)arg2 websiteURL:(id)arg3 messageName:(id)arg4 messageParams:(id)arg5;
- (id)initWithDelegate:(id)arg1;

@end

