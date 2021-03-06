//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIFont;

@interface IGStandardizedNUXLayoutSpec : NSObject
{
    UIFont *_headerFont;
    UIFont *_subHeaderFont;
    UIFont *_textLinkFont;
    double _leadingVerticalMargin;
    double _trailingVerticalMargin;
    double _verticalPadding;
    double _horizontalMargin;
}

+ (id)defaultLayoutSpec;
- (void).cxx_destruct;
@property(readonly, nonatomic) double horizontalMargin; // @synthesize horizontalMargin=_horizontalMargin;
@property(readonly, nonatomic) double verticalPadding; // @synthesize verticalPadding=_verticalPadding;
@property(readonly, nonatomic) double trailingVerticalMargin; // @synthesize trailingVerticalMargin=_trailingVerticalMargin;
@property(readonly, nonatomic) double leadingVerticalMargin; // @synthesize leadingVerticalMargin=_leadingVerticalMargin;
@property(readonly, nonatomic) UIFont *textLinkFont; // @synthesize textLinkFont=_textLinkFont;
@property(readonly, nonatomic) UIFont *subHeaderFont; // @synthesize subHeaderFont=_subHeaderFont;
@property(readonly, nonatomic) UIFont *headerFont; // @synthesize headerFont=_headerFont;
- (id)initWithHeaderFont:(id)arg1 subHeaderFontMargin:(id)arg2 textLinkFont:(id)arg3 leadingVerticalMargin:(double)arg4 trailingVerticalMargin:(double)arg5 verticalPadding:(double)arg6 horizontalMargin:(double)arg7;

@end

