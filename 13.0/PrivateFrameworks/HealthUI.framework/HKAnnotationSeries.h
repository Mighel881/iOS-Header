//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKGraphSeries.h>

#import <HealthUI/HKDateRangeDataSourceDelegate-Protocol.h>

@class NSArray;

@interface HKAnnotationSeries : HKGraphSeries <HKDateRangeDataSourceDelegate>
{
    NSArray *_chartPoints;
}

+ (id)_buildChartPointsForDateInterval:(id)arg1 trendData:(id)arg2;
@property(readonly, nonatomic) NSArray *chartPoints; // @synthesize chartPoints=_chartPoints;
- (void).cxx_destruct;
- (void)setUpdateDelegate:(id)arg1;
- (id)dataForDateRange:(id)arg1 timeScope:(long long)arg2;
- (_Bool)supportsMultiTouchSelection;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform)arg4 renderContext:(struct CGContext *)arg5 secondaryRenderContext:(id)arg6;
- (id)coordinatesForBlock:(id)arg1 blockPath:(CDStruct_6ca94699)arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (id)initWithDateInterval:(id)arg1 trendData:(id)arg2;

@end

