//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGListMoveIndex : NSObject
{
    long long _from;
    long long _to;
}

@property(readonly, nonatomic) long long to; // @synthesize to=_to;
@property(readonly, nonatomic) long long from; // @synthesize from=_from;
- (id)description;
- (long long)compare:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithFrom:(long long)arg1 to:(long long)arg2;

@end

