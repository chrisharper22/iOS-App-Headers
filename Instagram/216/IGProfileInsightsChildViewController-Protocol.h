//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGInsightsProfileFetchStatus;
@protocol IGProfileInsightsChildViewControllerDelegate;

@protocol IGProfileInsightsChildViewController <NSObject>
@property(nonatomic) __weak id <IGProfileInsightsChildViewControllerDelegate> delegate;
@property(readonly) struct CGSize intrinsicContentSize;
- (void)updateWithStatus:(IGInsightsProfileFetchStatus *)arg1 completion:(void (^)(void))arg2;
@end

