//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCPIDCaptureStage : NSObject <NSCopying>
{
    unsigned long long _subtype;
}

+ (id)frontSide;
+ (id)backSide;
- (void)matchFrontSide:(CDUnknownBlockType)arg1 backSide:(CDUnknownBlockType)arg2;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
