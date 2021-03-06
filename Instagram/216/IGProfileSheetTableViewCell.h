//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGGroupedTableViewCell.h>

@class UIColor;

@interface IGProfileSheetTableViewCell : IGGroupedTableViewCell
{
    _Bool _sizeToFitContent;
    UIColor *_titleColor;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool sizeToFitContent; // @synthesize sizeToFitContent=_sizeToFitContent;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_configureBorders;
- (void)updateLabelStyles;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

