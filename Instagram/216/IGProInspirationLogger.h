//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IG4BLogger;

@interface IGProInspirationLogger : NSObject
{
    IG4BLogger *_logger;
}

- (void).cxx_destruct;
- (void)logGridDoneSubmitErrorWithError:(id)arg1;
- (void)logGridDoneSubmit;
- (void)logGridDoneTapComponent;
- (void)logGridSeeMoreTapComponentWithSourceType:(unsigned long long)arg1;
- (void)logGridTileTapComponentWithSourceType:(unsigned long long)arg1 mediaIndex:(long long)arg2;
- (void)logGridCTATapComponentWithSourceType:(unsigned long long)arg1;
- (void)logGridViewComponentWithSourceType:(unsigned long long)arg1;
- (void)logGridFetchDataErrorWithError:(id)arg1;
- (void)logGridFetchDataWithAvailableOptions:(id)arg1;
- (void)logGridCancelStep;
- (void)logGridFinishStep;
- (void)logGridStartStep;
- (id)initWithLogger:(id)arg1;

@end
