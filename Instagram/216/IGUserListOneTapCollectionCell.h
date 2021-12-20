//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGDirectShareSheetOneTapButton, IGDirectShareSheetOneTapButtonState, IGTableLayoutSpec, IGUser, IGUserContentView, UIImageView, UIView;

@interface IGUserListOneTapCollectionCell : UICollectionViewCell
{
    IGUser *_user;
    IGUserContentView *_userContentView;
    UIView *_rightAccessaryContainerView;
    IGDirectShareSheetOneTapButton *_oneTapButton;
    UIImageView *_checkMarkImageView;
    IGDirectShareSheetOneTapButtonState *_oneTapButtonState;
    _Bool _disabled;
    IGTableLayoutSpec *_layoutSpec;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configureCellWithUser:(id)arg1 disabled:(_Bool)arg2 oneTapButtonState:(id)arg3 oneTapButtonDelegate:(id)arg4 nicknameManager:(id)arg5 module:(id)arg6;
- (void)_setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

