//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGPassthroughView.h>

@class CALayer, IGTapButton, NSString;
@protocol IGCameraEffectFooterViewDelegate;

@interface IGCameraEffectFooterView : IGPassthroughView
{
    IGPassthroughView *_titleWrapperView;
    IGTapButton *_titleButton;
    IGTapButton *_subtitleButton;
    IGTapButton *_saveButton;
    IGTapButton *_closeButton;
    CALayer *_backgroundLayer;
    id <IGCameraEffectFooterViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGCameraEffectFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTapTitle;
- (void)_didTapCloseButton;
- (void)_didTapSaveButton;
@property(nonatomic) _Bool savedState;
@property(nonatomic) _Bool closeButtonHidden;
@property(nonatomic) _Bool saveButtonHidden;
@property(retain, nonatomic) NSString *subtitle;
@property(retain, nonatomic) NSString *title;
@property(nonatomic) _Bool backgroundHidden;
- (void)layoutSubviews;
- (id)init;

@end

