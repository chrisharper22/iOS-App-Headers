//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIViewController;

@interface IGNavigationChainItem : NSObject
{
    int _sequence;
    UIViewController *_vc;
    NSString *_className;
    NSString *_module;
    NSString *_clickPoint;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int sequence; // @synthesize sequence=_sequence;
@property(readonly, nonatomic) NSString *clickPoint; // @synthesize clickPoint=_clickPoint;
@property(readonly, nonatomic) NSString *module; // @synthesize module=_module;
@property(readonly, nonatomic) NSString *className; // @synthesize className=_className;
@property(readonly, nonatomic) __weak UIViewController *vc; // @synthesize vc=_vc;
- (id)initWithViewController:(id)arg1 className:(id)arg2 module:(id)arg3 clickPoint:(id)arg4 sequence:(int)arg5;

@end
