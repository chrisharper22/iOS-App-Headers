//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber;

@interface KFRegion : NSObject
{
    NSArray *_tags;
    NSNumber *_identifier;
    struct CGRect _bounds;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(readonly, nonatomic) NSNumber *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSArray *tags; // @synthesize tags=_tags;
- (id)initWithTags:(id)arg1 identifier:(id)arg2 bounds:(struct CGRect)arg3;

@end

