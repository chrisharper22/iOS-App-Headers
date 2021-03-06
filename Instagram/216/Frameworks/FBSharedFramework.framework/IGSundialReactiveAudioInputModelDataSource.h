//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession, NSArray;
@protocol IGSundialReactiveAudioInputModel;

@interface IGSundialReactiveAudioInputModelDataSource : NSObject
{
    IGUserSession *_userSession;
    struct CGRect _contentRegion;
    id <IGSundialReactiveAudioInputModel> _reactiveAudioInputModel;
    NSArray *_inputModels;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *inputModels; // @synthesize inputModels=_inputModels;
- (void)configureInputModelAtIndex:(long long)arg1;
@property(readonly, nonatomic) id <IGSundialReactiveAudioInputModel> reactiveAudioInputModel;
- (long long)inputModelForRow:(long long)arg1;
- (long long)rowNumberForInputModel:(long long)arg1;
- (long long)numberOfInputModels;
- (id)initWithUserSession:(id)arg1 contentRegion:(struct CGRect)arg2;

@end

