//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSNumber;

@interface IGBloksRichTextItem : NSObject <NSCopying>
{
    NSArray *_items;
    NSNumber *_maxNumberOfLines;
}

+ (id)newWithItems:(id)arg1 maxNumberOfLines:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *maxNumberOfLines; // @synthesize maxNumberOfLines=_maxNumberOfLines;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;

@end
