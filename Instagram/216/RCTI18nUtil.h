//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface RCTI18nUtil : NSObject
{
}

+ (id)sharedInstance;
- (_Bool)isApplicationPreferredLanguageRTL;
- (_Bool)isDevicePreferredLanguageRTL;
- (void)swapLeftAndRightInRTL:(_Bool)arg1;
- (_Bool)doLeftAndRightSwapInRTL;
- (void)forceRTL:(_Bool)arg1;
- (_Bool)isRTLForced;
- (void)allowRTL:(_Bool)arg1;
- (_Bool)isRTLAllowed;
- (_Bool)isRTL;

@end

