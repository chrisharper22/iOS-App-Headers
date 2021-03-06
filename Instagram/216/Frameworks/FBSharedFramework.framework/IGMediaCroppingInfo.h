//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@interface IGMediaCroppingInfo : FBValueObject <NSCopying, NSCoding>
{
    double _left;
    double _right;
    double _top;
    double _bottom;
}

+ (id)valueWithJSONDictionary:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) double bottom; // @synthesize bottom=_bottom;
@property(readonly, nonatomic) double top; // @synthesize top=_top;
@property(readonly, nonatomic) double right; // @synthesize right=_right;
@property(readonly, nonatomic) double left; // @synthesize left=_left;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithLeft:(double)arg1 right:(double)arg2 top:(double)arg3 bottom:(double)arg4;
- (id)initWithCoder:(id)arg1;

@end

