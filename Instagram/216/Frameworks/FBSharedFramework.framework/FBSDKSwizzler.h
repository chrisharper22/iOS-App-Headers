//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBSDKSwizzler : NSObject
{
}

+ (void)swizzleSelectorWithBlock:(CDUnknownBlockType)arg1 async:(_Bool)arg2;
+ (_Bool)object:(id)arg1 ofClass:(Class)arg2 isCallingSelector:(SEL)arg3;
+ (void)object:(id)arg1 ofClass:(Class)arg2 removeSelector:(SEL)arg3;
+ (void)object:(id)arg1 ofClass:(Class)arg2 addSelector:(SEL)arg3;
+ (void)unswizzleSelector:(SEL)arg1 onClass:(Class)arg2 named:(id)arg3;
+ (void)swizzleSelector:(SEL)arg1 onClass:(Class)arg2 withBlock:(CDUnknownBlockType)arg3 named:(id)arg4 async:(_Bool)arg5;
+ (void)swizzleSelector:(SEL)arg1 onClass:(Class)arg2 withBlock:(CDUnknownBlockType)arg3 named:(id)arg4;
+ (_Bool)isLocallyDefinedMethod:(struct objc_method *)arg1 onClass:(Class)arg2;
+ (void)setSwizzle:(id)arg1 forMethod:(struct objc_method *)arg2;
+ (void)removeSwizzleForMethod:(struct objc_method *)arg1;
+ (id)swizzleForMethod:(struct objc_method *)arg1;
+ (void)printSwizzles;
+ (void)resolveConflict;
+ (void)initialize;

@end
