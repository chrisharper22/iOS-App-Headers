//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGShareSheetShareToRow, IGSundialShareSheetV2TitleRow, IGUserSession, UILabel, UIView;

@interface IGSundialShareSheetV2PublicShareToCell : UICollectionViewCell
{
    IGSundialShareSheetV2TitleRow *_title;
    UILabel *_description;
    IGShareSheetShareToRow *_shareToFeed;
    UIView *_separatorLine;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGShareSheetShareToRow *shareToFeed;
- (void)updateUserSession:(id)arg1 showSeparator:(_Bool)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
