//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGSundialComposition, NSArray, NSSet, UIViewController;
@protocol IGStoryCreationViewControllerType;

@protocol IGSundialCreationViewControllerNavigationDelegate <NSObject>
- (void)creationViewController:(UIViewController<IGStoryCreationViewControllerType> *)arg1 didShareSundialPostWithExitPoint:(long long)arg2 destination:(long long)arg3 storySendTarget:(long long)arg4 toDirectRecipients:(NSSet *)arg5 storyModelArray:(NSArray *)arg6 metadataArray:(NSArray *)arg7;
- (void)creationViewController:(UIViewController<IGStoryCreationViewControllerType> *)arg1 didShareSundialPost:(IGSundialComposition *)arg2 toDestination:(long long)arg3;
@end

