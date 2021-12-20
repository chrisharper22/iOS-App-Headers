//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class NSData, NSString;

@interface FBCapturePOIDetectedObject : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    struct CGRect _face_rect;
    NSString *_code_code;
    NSData *_code_data;
    double _code_time;
    struct CGRect _code_bounds;
    struct CGRect _humanBody_rect;
    struct CGRect _cat_rect;
    struct CGRect _dog_rect;
}

+ (id)humanBodyWithRect:(struct CGRect)arg1;
+ (id)faceWithRect:(struct CGRect)arg1;
+ (id)dogWithRect:(struct CGRect)arg1;
+ (id)codeWithCode:(id)arg1 data:(id)arg2 time:(double)arg3 bounds:(struct CGRect)arg4;
+ (id)catWithRect:(struct CGRect)arg1;
- (void).cxx_destruct;
- (void)matchFace:(CDUnknownBlockType)arg1 code:(CDUnknownBlockType)arg2 humanBody:(CDUnknownBlockType)arg3 cat:(CDUnknownBlockType)arg4 dog:(CDUnknownBlockType)arg5;

@end

