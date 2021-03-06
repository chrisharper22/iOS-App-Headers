//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class UIColor, UIFont;

@interface IGNUXLayoutSpec : NSObject <NSCopying>
{
    UIFont *_headerFont;
    double _headerTopMargin;
    UIFont *_subHeaderFont;
    UIColor *_subHeaderTextColor;
    double _regularVerticalSpacing;
    double _smallVerticalSpacing;
    UIFont *_textLinkFont;
    double _footerHeight;
    double _sideMargin;
}

+ (id)defaultLayoutSpec;
- (void).cxx_destruct;
@property(readonly, nonatomic) double sideMargin; // @synthesize sideMargin=_sideMargin;
@property(readonly, nonatomic) double footerHeight; // @synthesize footerHeight=_footerHeight;
@property(readonly, nonatomic) UIFont *textLinkFont; // @synthesize textLinkFont=_textLinkFont;
@property(readonly, nonatomic) double smallVerticalSpacing; // @synthesize smallVerticalSpacing=_smallVerticalSpacing;
@property(readonly, nonatomic) double regularVerticalSpacing; // @synthesize regularVerticalSpacing=_regularVerticalSpacing;
@property(readonly, nonatomic) UIColor *subHeaderTextColor; // @synthesize subHeaderTextColor=_subHeaderTextColor;
@property(readonly, nonatomic) UIFont *subHeaderFont; // @synthesize subHeaderFont=_subHeaderFont;
@property(readonly, nonatomic) double headerTopMargin; // @synthesize headerTopMargin=_headerTopMargin;
@property(readonly, nonatomic) UIFont *headerFont; // @synthesize headerFont=_headerFont;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHeaderFont:(id)arg1 headerTopMargin:(double)arg2 subheaderFont:(id)arg3 subHeaderTextColor:(id)arg4 regularVerticalSpacing:(double)arg5 smallVerticalSpacing:(double)arg6 textLinkFont:(id)arg7 footerHeight:(double)arg8 sideMargin:(double)arg9;

@end

