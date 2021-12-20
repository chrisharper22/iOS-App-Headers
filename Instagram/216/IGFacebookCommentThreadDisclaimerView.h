//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IGListBindable-Protocol.h"

@class NSString, UILabel;

@interface IGFacebookCommentThreadDisclaimerView : UICollectionViewCell <IGListBindable>
{
    UILabel *_disclaimer;
}

+ (struct CGSize)cellSizeForDisclaimerText:(id)arg1 width:(double)arg2;
+ (id)_labelForDisclaimer;
- (void).cxx_destruct;
- (void)bindViewModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

