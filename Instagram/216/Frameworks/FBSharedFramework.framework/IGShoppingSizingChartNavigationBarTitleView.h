//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGFeedItemPageIndicator, UILabel;

@interface IGShoppingSizingChartNavigationBarTitleView : UIView
{
    UILabel *_titleLabel;
    IGFeedItemPageIndicator *_pageControl;
    unsigned long long _numberOfPages;
    unsigned long long _currentPage;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) unsigned long long numberOfPages; // @synthesize numberOfPages=_numberOfPages;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

