//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGPopoverAnimation : NSObject
{
    CDUnknownBlockType _presentationAnimation;
    CDUnknownBlockType _dismissalAnimation;
}

+ (id)standardDialogAnimation;
+ (id)classicAnimation;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType dismissalAnimation; // @synthesize dismissalAnimation=_dismissalAnimation;
@property(readonly, nonatomic) CDUnknownBlockType presentationAnimation; // @synthesize presentationAnimation=_presentationAnimation;
- (id)initWithPresentationAnimation:(CDUnknownBlockType)arg1 dismissalAnimation:(CDUnknownBlockType)arg2;

@end

