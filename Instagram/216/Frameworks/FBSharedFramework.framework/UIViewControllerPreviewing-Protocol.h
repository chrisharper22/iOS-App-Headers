//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class UIGestureRecognizer, UIView;
@protocol UIViewControllerPreviewingDelegate;

@protocol UIViewControllerPreviewing <NSObject>
@property(nonatomic) struct CGRect sourceRect;
@property(readonly, nonatomic) UIView *sourceView;
@property(readonly, nonatomic) id <UIViewControllerPreviewingDelegate> delegate;
@property(readonly, nonatomic) UIGestureRecognizer *previewingGestureRecognizerForFailureRelationship;
@end

