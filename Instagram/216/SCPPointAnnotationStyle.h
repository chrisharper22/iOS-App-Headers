//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class UIColor;

@interface SCPPointAnnotationStyle : NSObject <NSCopying>
{
    UIColor *_color;
    double _radius;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double radius; // @synthesize radius=_radius;
@property(readonly, copy, nonatomic) UIColor *color; // @synthesize color=_color;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithColor:(id)arg1 radius:(double)arg2;

@end

