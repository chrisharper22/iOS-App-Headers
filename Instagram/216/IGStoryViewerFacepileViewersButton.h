//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class IGStoryFacepileView, IGStoryFullscreenStoryOwnerViewerButtonViewModel, UIImageView, UILabel;

@interface IGStoryViewerFacepileViewersButton : UIControl
{
    IGStoryFacepileView *_facepileView;
    UIImageView *_expiredViewersIcon;
    UILabel *_seenByLabel;
    double _labelMaxWidth;
    IGStoryFullscreenStoryOwnerViewerButtonViewModel *_viewModel;
    struct UIOffset _tapPadding;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGStoryFullscreenStoryOwnerViewerButtonViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) double labelMaxWidth; // @synthesize labelMaxWidth=_labelMaxWidth;
@property(nonatomic) struct UIOffset tapPadding; // @synthesize tapPadding=_tapPadding;
- (void)configureWithViewModel:(id)arg1 module:(id)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
