//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class FBPayConnectUpsellAccountModel, FBPayCredentialLogoTitleView, UILabel, UIView;

@interface FBPayConnectBottomSheetUpsellAccountCell : UITableViewCell
{
    FBPayConnectUpsellAccountModel *_accountModel;
    UIView *_profilePicView;
    UILabel *_nameLabel;
    UILabel *_platformLabel;
    UILabel *_emailLabel;
    FBPayCredentialLogoTitleView *_firstRowCredentialView;
    FBPayCredentialLogoTitleView *_secondRowCredentialView;
}

- (void).cxx_destruct;
- (id)_constraintsForCredentialViews;
- (id)_constraintsForEmailLabel;
- (id)_constraintsForPlatformLabel;
- (id)_constraintsForNameLabel;
- (id)_constraintsForProfilePicView;
- (void)_setupConstraints;
- (void)_setupSecondRowCredentialViewWithModel:(id)arg1;
- (void)_setupFirstRowCredentialViewWithModel:(id)arg1 hasOptionalSubtitle:(_Bool)arg2;
- (void)_setupCredentialViews;
- (void)_setupEmailLabel;
- (void)_setupPlatformLabel;
- (void)_setupNameLabel;
- (void)_setupProfilePicView;
- (void)_setupViews;
- (id)initWithViewModel:(id)arg1;

@end
