//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface IGAdsAdDetailsPageROBISubSectionIndividualView : UIView
{
    UILabel *_subSectionTitleLabel;
    UILabel *_numberOfResponsesLabel;
    NSString *_numberReviews;
    NSString *_categoryName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(copy, nonatomic) NSString *numberReviews; // @synthesize numberReviews=_numberReviews;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_setupNumberOfResponsesLabel;
- (void)_setupSubSectionTitleLabel;
- (id)initWithFrame:(struct CGRect)arg1;

@end

