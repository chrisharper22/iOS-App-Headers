//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGUser, IGUserContentView, UIButton;
@protocol IGUserListFanClubMemberEditableCellDelegate;

@interface IGUserListFanClubMemberEditableCell : UICollectionViewCell
{
    IGUserContentView *_userContentView;
    UIButton *_moreButton;
    _Bool _shouldUseForRemovedMembers;
    IGUser *_user;
    id <IGUserListFanClubMemberEditableCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGUserListFanClubMemberEditableCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool shouldUseForRemovedMembers; // @synthesize shouldUseForRemovedMembers=_shouldUseForRemovedMembers;
@property(readonly, nonatomic) IGUser *user; // @synthesize user=_user;
- (void)_onMoreButtonTapped:(id)arg1;
- (void)configureCellWithUser:(id)arg1 shouldUseForRemovedMembers:(_Bool)arg2 displayNameType:(long long)arg3 nicknameManager:(id)arg4 formattedStringForMemberSince:(id)arg5 module:(id)arg6;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

