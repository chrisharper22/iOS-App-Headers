//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IGUserContentViewDelegate-Protocol.h"

@class IGDirectThreadDetailUserViewModel, IGTapButton, IGUserContentView, NSString, UIView;
@protocol IGDirectThreadDetailUserCellDelegate, IGDirectThreadDetailUserCellRightViewProvider;

@interface IGDirectThreadDetailUserCell : UICollectionViewCell <IGUserContentViewDelegate>
{
    IGUserContentView *_userView;
    IGTapButton *_adminButton;
    IGDirectThreadDetailUserViewModel *_viewModel;
    UIView *_rightView;
    id <IGDirectThreadDetailUserCellDelegate> _delegate;
    id <IGDirectThreadDetailUserCellRightViewProvider> _rightViewProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IGDirectThreadDetailUserCellRightViewProvider> rightViewProvider; // @synthesize rightViewProvider=_rightViewProvider;
@property(nonatomic) __weak id <IGDirectThreadDetailUserCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)userContentView:(id)arg1 didTapStoryViewerEntryView:(id)arg2;
- (void)_didTapAdminButton:(id)arg1;
- (void)layoutSubviews;
- (void)_createAdminButtonIfNeeded;
- (void)configureWithViewModel:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

