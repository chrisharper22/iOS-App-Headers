//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGStoryViewHelper : NSObject
{
}

+ (void)showSimpleViwerActionSheetWithViewController:(id)arg1 userSession:(id)arg2 module:(id)arg3 user:(id)arg4 actions:(id)arg5;
+ (void)showViewerActionSheetWithViewController:(id)arg1 userSession:(id)arg2 module:(id)arg3 user:(id)arg4 extraActions:(id)arg5;
+ (id)storyViewerStatusBarVolumeViewConfiguration;
+ (void)showHideStoryFromReelAlertWithViewController:(id)arg1 reel:(id)arg2 mediaType:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
+ (void)showHideStoryFromAlertWithViewerController:(id)arg1 username:(id)arg2 titleText:(id)arg3 completionBlock:(CDUnknownBlockType)arg4 cancelBlock:(CDUnknownBlockType)arg5;
+ (void)showHideStoryFromAlertWithViewerController:(id)arg1 facebookFullName:(id)arg2 completionBlock:(CDUnknownBlockType)arg3 cancelBlock:(CDUnknownBlockType)arg4;

@end
