//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSString;
@protocol FBARInstructionServiceEffectDescriptor;

@protocol FBARInstructionServiceDelegate <NSObject>
- (void)instructionServiceHideInstructionForEffectDescriptor:(id <FBARInstructionServiceEffectDescriptor>)arg1;
- (void)instructionServiceForEffectDescriptor:(id <FBARInstructionServiceEffectDescriptor>)arg1 showInstructionWithCustomText:(NSString *)arg2;
- (void)instructionServiceForEffectDescriptor:(id <FBARInstructionServiceEffectDescriptor>)arg1 showInstructionForToken:(NSString *)arg2;
- (void)instructionServiceForEffectDescriptor:(id <FBARInstructionServiceEffectDescriptor>)arg1 showInstructionOfType:(unsigned long long)arg2 forDuration:(double)arg3;
- (void)instructionServiceForEffectDescriptor:(id <FBARInstructionServiceEffectDescriptor>)arg1 didChangeAutomaticInstructionType:(unsigned long long)arg2;
@end
