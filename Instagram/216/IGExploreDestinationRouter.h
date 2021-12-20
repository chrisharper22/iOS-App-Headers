//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGExploreDestinationRouter : NSObject
{
}

+ (void)_routeToUnifiedChainWithDiscoveryItem:(id)arg1 selectedGridItem:(id)arg2 userSession:(id)arg3 endpoint:(id)arg4 sourceType:(long long)arg5 analyticsModule:(id)arg6 exploreViewController:(id)arg7 feedStore:(id)arg8 titleConfig:(id)arg9 chainingAdsConfig:(id)arg10 sessionTracker:(id)arg11 topic:(id)arg12 loggingProvider:(id)arg13 chainingContainerDelegate:(id)arg14 focusedMediaDelegate:(id)arg15 eventHandler:(id)arg16 parser:(CDUnknownBlockType)arg17 isReshareHubEnabled:(_Bool)arg18 prioritizedDirectRecipient:(id)arg19;
+ (void)routeToIGTVWithMedia:(id)arg1 mediaSeekTime:(id)arg2 userSession:(id)arg3 analyticsModuleSuffix:(id)arg4 exploreViewController:(id)arg5 entryPoint:(id)arg6;
+ (void)presentDiscoveryItemWithChaining:(id)arg1 userSession:(id)arg2 exploreViewController:(id)arg3 chainingContext:(id)arg4 sessionTracker:(id)arg5 chainingContainerDelegate:(id)arg6 focusedMediaDelegate:(id)arg7 topic:(id)arg8 titleConfig:(id)arg9 isReshareHubEnabled:(_Bool)arg10 prioritizedDirectRecipient:(id)arg11;
+ (void)presentDiscoveryItemWithContextualFeed:(id)arg1 userSession:(id)arg2 sessionTracker:(id)arg3 exploreViewController:(id)arg4 dataController:(id)arg5 focusCoordinator:(id)arg6 title:(id)arg7 subtitle:(id)arg8 feedItemLogger:(id)arg9;

@end
