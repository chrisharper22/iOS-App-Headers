//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGSundialComposition, NSDictionary, UIImage, UIViewController;
@protocol IGStoryMontagePresenterDelegate;

@protocol IGStoryMontagePresenting <NSObject>
@property(nonatomic) __weak id <IGStoryMontagePresenterDelegate> delegate;
- (void)presentMontageWithComposition:(IGSundialComposition *)arg1 fromViewController:(UIViewController *)arg2 previewImage:(UIImage *)arg3 loggingMetadata:(NSDictionary *)arg4;
@end

