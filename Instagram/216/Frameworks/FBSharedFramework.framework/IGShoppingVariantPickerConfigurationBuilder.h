//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGShoppingVariantPickerOutOfStockValueStyle;

@interface IGShoppingVariantPickerConfigurationBuilder : NSObject
{
    CDUnknownBlockType _titleBlock;
    CDUnknownBlockType _subtitleBlock;
    CDUnknownBlockType _canShowSizeChartBlock;
    CDUnknownBlockType _textPickerSectionConfiguration;
    IGShoppingVariantPickerOutOfStockValueStyle *_outOfStockValueStyle;
}

+ (id)builderWithTitleBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (id)_buildThumbnailPickerConfiguration;
- (id)_buildTextPickerConfiguration;
- (id)build;
- (id)withOutOfStockValueStyle:(id)arg1;
- (id)withTextPickerSectionConfigurationBlock:(CDUnknownBlockType)arg1;
- (id)withCanShowSizeChartBlock:(CDUnknownBlockType)arg1;
- (id)withSubtitleBlock:(CDUnknownBlockType)arg1;
- (id)initWithTitleBlock:(CDUnknownBlockType)arg1;

@end

