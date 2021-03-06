//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IGUserContentViewDelegate-Protocol.h"
#import "IGUserListSelectableCellType-Protocol.h"

@class IGTableLayoutSpec, IGUser, IGUserContentView, NSString, UIActivityIndicatorView, UIColor, UIImage, UIImageView, UIView;
@protocol IGUserListSelectableCollectionCellDelegate;

@interface IGUserListSelectableCollectionCell : UICollectionViewCell <IGUserContentViewDelegate, IGUserListSelectableCellType>
{
    UIActivityIndicatorView *_spinnerView;
    _Bool _disabled;
    _Bool _userSelected;
    _Bool _showBottomSeparator;
    id <IGUserListSelectableCollectionCellDelegate> _delegate;
    IGUser *_user;
    IGUserContentView *_userContentView;
    UIImageView *_checkmarkImageView;
    UIImage *_selectedCheckBox;
    UIImage *_emptyCheckBox;
    UIView *_bottomSeparatorLineView;
    IGTableLayoutSpec *_tableInterface;
    UIColor *_checkmarkColor;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIColor *checkmarkColor; // @synthesize checkmarkColor=_checkmarkColor;
@property(readonly, nonatomic) _Bool showBottomSeparator; // @synthesize showBottomSeparator=_showBottomSeparator;
@property(readonly, nonatomic) IGTableLayoutSpec *tableInterface; // @synthesize tableInterface=_tableInterface;
@property(readonly, nonatomic) _Bool userSelected; // @synthesize userSelected=_userSelected;
@property(readonly, nonatomic) UIView *bottomSeparatorLineView; // @synthesize bottomSeparatorLineView=_bottomSeparatorLineView;
@property(retain, nonatomic) UIImage *emptyCheckBox; // @synthesize emptyCheckBox=_emptyCheckBox;
@property(retain, nonatomic) UIImage *selectedCheckBox; // @synthesize selectedCheckBox=_selectedCheckBox;
@property(readonly, nonatomic) UIImageView *checkmarkImageView; // @synthesize checkmarkImageView=_checkmarkImageView;
@property(readonly, nonatomic) IGUserContentView *userContentView; // @synthesize userContentView=_userContentView;
@property(readonly, nonatomic) IGUser *user; // @synthesize user=_user;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) __weak id <IGUserListSelectableCollectionCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_setupBottomSeparator:(struct UIEdgeInsets)arg1;
- (void)_setCellColor:(id)arg1;
- (void)_setupCheckmarkImageViewForSelectionState;
- (void)_setupSpinnerView;
- (void)_setupCheckmarkImageView;
- (void)layoutSubviews;
- (void)userContentView:(id)arg1 didTapStoryViewerEntryView:(id)arg2;
- (void)setUserSelected:(_Bool)arg1;
- (void)hideActivityIndicator;
- (void)showActivityIndicator;
- (void)configureCellWithUser:(id)arg1 displayNameType:(long long)arg2 nicknameManager:(id)arg3 module:(id)arg4 titleSuffix:(id)arg5 displaySubtitle:(_Bool)arg6 cellColor:(id)arg7 separatorInsets:(struct UIEdgeInsets)arg8 showBottomSeparator:(_Bool)arg9 checkmarkColor:(id)arg10;
- (void)configureCellWithUser:(id)arg1 displayNameType:(long long)arg2 nicknameManager:(id)arg3 showBottomSeparator:(_Bool)arg4 module:(id)arg5;
- (void)configureCellWithUser:(id)arg1 displayNameType:(long long)arg2 nicknameManager:(id)arg3 module:(id)arg4;
- (void)_setupSubviews;
- (void)setTableLayoutSpec:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

