//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGProfileStoriesNavigation : NSObject
{
}

+ (void)showMergedStoryAndPostLiveViewerWithReel:(id)arg1 postLiveItemModel:(id)arg2 userSession:(id)arg3 fromView:(id)arg4 sessionID:(id)arg5 viewController:(id)arg6 viewerDelegate:(id)arg7;
+ (void)showPostLiveViewerWithPostLiveItemModel:(id)arg1 userSession:(id)arg2 fromView:(id)arg3 sessionID:(id)arg4 viewController:(id)arg5 viewerDelegate:(id)arg6;
+ (void)showBroadcastViewerWithBroadcast:(id)arg1 fromDeeplinkURL:(_Bool)arg2 userSession:(id)arg3 fromView:(id)arg4 sessionID:(id)arg5 viewController:(id)arg6 viewerDelegate:(id)arg7;
+ (void)showHighlightsViewerWithReel:(id)arg1 userSession:(id)arg2 fromView:(id)arg3 sessionID:(id)arg4 viewController:(id)arg5 viewerDelegate:(id)arg6 entryPoint:(long long)arg7 launchedFromStorySharingLink:(_Bool)arg8 transitionFocusItem:(id)arg9;
+ (void)showStoriesViewerWithReel:(id)arg1 focusedReelMediaID:(id)arg2 openViewerListAtLaunch:(_Bool)arg3 userSession:(id)arg4 fromView:(id)arg5 sessionID:(id)arg6 viewController:(id)arg7 viewerDelegate:(id)arg8 isFromStoryNotification:(_Bool)arg9 launchedFromStorySharingLink:(_Bool)arg10;

@end

