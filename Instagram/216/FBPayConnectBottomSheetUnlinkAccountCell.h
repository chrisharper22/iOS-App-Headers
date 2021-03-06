//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "FBPayRadioButtonDelegate-Protocol.h"

@class FBPayConnectUpsellAccountModel, FBPayRadioButton, NSString, UILabel, UIView;
@protocol FBPayConnectBottomSheetUnlinkAccountCellDelegate;

@interface FBPayConnectBottomSheetUnlinkAccountCell : UITableViewCell <FBPayRadioButtonDelegate>
{
    FBPayConnectUpsellAccountModel *_accountModel;
    UIView *_profilePicView;
    UILabel *_nameLabel;
    UILabel *_platformLabel;
    FBPayRadioButton *_radioButton;
    id <FBPayConnectBottomSheetUnlinkAccountCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FBPayConnectBottomSheetUnlinkAccountCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_constraintsForRadioButton;
- (id)_constraintsForPlatformLabel;
- (id)_constraintsForNameLabel;
- (id)_constraintsForProfilePicView;
- (void)_setupConstraints;
- (void)didTapToSelectRadioButton:(id)arg1;
- (id)getAccountID;
- (void)updateRadioButtonWithSelectionState:(_Bool)arg1;
- (void)didTapCell;
- (void)_setupRadioButton;
- (void)_setupPlatformLabel;
- (void)_setupNameLabel;
- (void)_setupProfilePicView;
- (void)_setupViews;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

